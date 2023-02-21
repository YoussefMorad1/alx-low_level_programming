	.file	"11-print_to_98.c"
	.text
	.globl	print_to_98
	.type	print_to_98, @function
print_to_98:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	cmpl	$98, -20(%rbp)
	jg	.L8
	jmp	.L3
.L6:
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	cvtsi2sdl	-20(%rbp), %xmm0
	call	log10@PLT
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -16(%rbp)
	jmp	.L4
.L5:
	movl	-4(%rbp), %eax
	cltd
	idivl	-16(%rbp)
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movl	%edx, %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -16(%rbp)
.L4:
	cmpl	$0, -16(%rbp)
	jne	.L5
	movl	$44, %edi
	call	_putchar@PLT
	movl	$32, %edi
	call	_putchar@PLT
	addl	$1, -20(%rbp)
.L3:
	cmpl	$97, -20(%rbp)
	jle	.L6
	jmp	.L7
.L11:
	movl	-20(%rbp), %eax
	movl	%eax, -8(%rbp)
	cvtsi2sdl	-20(%rbp), %xmm0
	call	log10@PLT
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -12(%rbp)
	jmp	.L9
.L10:
	movl	-8(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	movl	%eax, %ecx
	movslq	%ecx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edx
	movl	%edx, %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	movl	-12(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%rbp)
.L9:
	cmpl	$0, -12(%rbp)
	jne	.L10
	movl	$44, %edi
	call	_putchar@PLT
	movl	$32, %edi
	call	_putchar@PLT
	subl	$1, -20(%rbp)
.L8:
	cmpl	$98, -20(%rbp)
	jg	.L11
.L7:
	movl	$57, %edi
	call	_putchar@PLT
	movl	$56, %edi
	call	_putchar@PLT
	movl	$10, %edi
	call	_putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	print_to_98, .-print_to_98
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
