
undefined4 FUN_00499440(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_005653a0;
  uVar4 = 0;
  switch(param_1) {
  case 1:
    if (DAT_005653a0 == 0) {
      return 0;
    }
    iVar2 = FUN_00498df0();
    if (iVar2 == 0) {
LAB_0049950f:
      pcVar3 = s_NO_SIR_00535548;
      uVar4 = 0;
    }
    else {
      pcVar3 = s_ATTACK_TARGET_00535594;
      uVar4 = 1;
    }
    break;
  case 2:
    if (DAT_005653a0 == 0) {
      return 0;
    }
    iVar2 = FUN_00498ea0();
    if (iVar2 == 0) goto LAB_0049950f;
    pcVar3 = s_PROTECT_TARGET_00535584;
    uVar4 = 1;
    break;
  case 3:
    if (DAT_005653a0 == 0) {
      return 0;
    }
    iVar2 = FUN_00499000();
    if (iVar2 == 0) goto LAB_0049950f;
    pcVar3 = s_DISABLE_TARGET_00535574;
    uVar4 = 1;
    break;
  case 4:
    if (DAT_005653a0 == 0) {
      return 0;
    }
    iVar2 = FUN_00499080();
    if (iVar2 == 0) goto LAB_0049950f;
    pcVar3 = s_COVER_ME_00535568;
    uVar4 = 1;
    break;
  case 5:
    if (DAT_005653a0 == 0) {
      return 0;
    }
    iVar2 = FUN_00498da0();
    if (iVar2 == 0) goto LAB_0049950f;
    pcVar3 = s_YES_SIR_00535550;
    uVar4 = 1;
    break;
  case 6:
    if (DAT_005653a0 == 0) {
      return 0;
    }
    iVar2 = FUN_004990c0();
    if (iVar2 == 0) goto LAB_0049950f;
    pcVar3 = s_RETURN_TO_BASE_00535558;
    uVar4 = 1;
    break;
  default:
    goto switchD_0049945f_default;
  }
  if ((pcVar3 != (char *)0x0) && (DAT_005653b0 != '\0')) {
    FUN_0041f0e0(&DAT_005653b0,pcVar3,0xfa,*(undefined4 *)(iVar1 + 100));
  }
switchD_0049945f_default:
  return uVar4;
}

