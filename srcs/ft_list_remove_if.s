BITS 64

section .text
    global ft_list_remove_if
    extern ft_strcmp

ft_list_remove_if:
    push rbp
    mov rbp, rsp

    mov r15, rdi                   ; r15 = head (ponteiro para o início da lista)
    mov r14, [rdi]                 ; r14 = nó atual (começo da lista)
    mov r11, rsi                   ; r11 = data_ref (dado para comparar)
    mov r12, rdx                   ; r12 = função cmp
    mov r13, rcx                   ; r13 = função free

.loop_list:
    test r14, r14                  ; verifica se r14 é NULL (fim da lista)
    jz .return

    mov rdi, [r14]                 ; rdi = r14.data (dado do nó atual)
    mov rsi, r11                   ; rsi = data_ref
    call r12                       ; chamada da função cmp (comparação)
    cmp rax, 0                     ; verifica o resultado da comparação
    jne .next_node                 ; se diferente, vá para o próximo nó

    ; Deletar nó atual
    cmp [r15], r14                 ; verifica se estamos no primeiro nó
    je .delete_first_node          ; se sim, trata como caso especial para atualizar o head

    ; Caso geral: nó do meio ou fim da lista
    mov r9, [r14 + 8]              ; r9 = próximo nó (salva o próximo nó antes de chamar free)
    mov [r10 + 8], r9              ; r10.next = r14.next (nó anterior aponta para o próximo)

    ; Chama a função free para liberar a memória do nó atual
    mov rdi, r14                   ; prepara rdi para chamar free com o nó atual
    call r13                       ; chama a função free para liberar a memória
    mov rdi, 0                     ; zera rdi para evitar problemas com a chamada da função free

    mov r14, r9                    ; atualiza r14 para o próximo nó após a remoção
    jmp .loop_list                 ; continua iterando a lista

.delete_first_node:
    mov r9, [r14 + 8]              ; r9 = próximo nó
    mov [r15], r9                  ; head = r14.next (atualiza o head)

    ; Chama a função free para liberar a memória do primeiro nó
    mov rdi, r14                   ; prepara rdi para chamar free com o nó atual
    call r13                       ; chama a função free para liberar a memória
    mov rdi, 0                     ; zera rdi para evitar problemas com a chamada da função free

    mov r14, r9                    ; atualiza r14 para o próximo nó após a remoção
    jmp .loop_list                 ; continua iterando a lista

.next_node:
    mov r10, r14                   ; r10 = nó atual (mantém o nó anterior)
    mov r14, [r14 + 8]             ; r14 = próximo nó
    jmp .loop_list                 ; volta ao início do loop para verificar o próximo nó

.return:
    leave
    ret
