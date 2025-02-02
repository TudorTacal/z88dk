
; size_t strlcpy(char * restrict s1, const char * restrict s2, size_t n)

SECTION code_clib
SECTION code_string

PUBLIC strlcpy

EXTERN asm_strlcpy

strlcpy:
IF __CPU_GBZ80__
   ld hl,sp+2
   ld c,(hl)
   inc hl
   ld b,(hl)
   inc hl
   ld e,(hl)
   inc hl
   ld d,(hl)
   inc hl
   ld a,(hl+)
   ld h,(hl)
   ld l,e
   ld e,l
   ld a,h
   ld h,d
   ld d,a
   call asm_strlcpy
   ld d,h
   ld e,l
   ret
ELSE
   pop af
   pop bc
   pop hl
   pop de
   
   push de
   push hl
   push bc
   push af
   jp asm_strlcpy
ENDIF
   

; SDCC bridge for Classic
IF __CLASSIC
PUBLIC _strlcpy
defc _strlcpy = strlcpy
ENDIF

