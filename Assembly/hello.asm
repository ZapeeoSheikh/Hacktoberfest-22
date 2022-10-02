;masm 8086

.model small
.stack 100h
.data
    
    string byte "Hello, World!$"

.code
main proc
    
    mov ax, @data
    mov ds, ax

    mov dx, offset string
    mov ah, 9
    int 21h        
    
mov ah,4ch
int 21h
    
main endp
end main