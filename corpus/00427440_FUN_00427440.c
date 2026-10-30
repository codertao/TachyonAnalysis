
void FUN_00427440(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_s_TARGET_LEAD_PIP_005361b8;
  puVar2 = PTR_s_TARGET_LEAD_PIP_005361b8;
  while (puVar2 != (undefined *)0x0) {
    iVar3 = FUN_004c67c0(*ppuVar4,param_1);
    if (iVar3 == 0) {
      *(undefined4 *)ppuVar4[1] = param_2;
    }
    ppuVar1 = ppuVar4 + 3;
    ppuVar4 = ppuVar4 + 3;
    puVar2 = *ppuVar1;
  }
  return;
}

