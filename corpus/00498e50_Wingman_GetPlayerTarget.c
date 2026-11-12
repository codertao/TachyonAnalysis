
/* sweep */

undefined4 Wingman_GetPlayerTarget(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(GLBL_SOME_CONTEXT + 0x110);
  if ((((iVar2 != 0) || (iVar2 = *(int *)(GLBL_SOME_CONTEXT + 0x90), iVar2 != 0)) &&
      (*(char *)(iVar2 + 0xc2) == '\x02')) &&
     ((*(int *)(iVar2 + 0x8c) != 0 &&
      (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x78), pcVar1 != (code *)0x0)))) {
    uVar3 = (*pcVar1)(iVar2,0x15,0);
    return uVar3;
  }
  return 0;
}

