
void FUN_0046c040(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2;
  uVar3 = 0;
  if (DAT_0058973c != 0) {
    iVar5 = DAT_00589740 + 0x20;
    iVar4 = DAT_00589740;
    do {
      if (*(int *)(iVar5 + 0x30) == 0) {
        FUN_0046bde0(iVar5,iVar4,0);
        iVar2 = FUN_0048f670(s_WEAPON_TYPES_0054763c,iVar4,&param_2);
        if ((iVar2 != 0) &&
           (param_2 = param_2 + -1, (*(uint *)(&DAT_0055a66c + param_2 * 0x110) & param_1) != 0))
        goto LAB_0046c0a2;
      }
      else {
LAB_0046c0a2:
        FUN_0046bde0(iVar5,iVar4,iVar1);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x5c;
      iVar5 = iVar5 + 0x5c;
    } while (uVar3 < DAT_0058973c);
  }
  FUN_0046bf30();
  return;
}

