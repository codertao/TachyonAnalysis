
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void MultiPart_UpdateChildOffsets(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  float afStack_18 [6];
  
  Ent_DrawAtLod(param_1 + 0x18,2);
  iVar2 = *(int *)(param_1 + 0xd8);
  Rot_FromAnglesInv(afStack_18,param_2);
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xd8)) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x34) - *(int *)(param_1 + 0x34);
    piVar1 = (int *)(iVar2 + 0x40);
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x38) - *(int *)(param_1 + 0x38);
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x3c) - *(int *)(param_1 + 0x3c);
    call_Rot_SetSinCos(afStack_18);
    Rot_ApplyCurrent(piVar1,piVar1);
    *piVar1 = *piVar1 + *(int *)(param_1 + 0x40);
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + *(int *)(param_1 + 0x44);
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + *(int *)(param_1 + 0x48);
    if (iVar2 == *(int *)(GLBL_SOME_CONTEXT + 0x110)) {
      DAT_005b1b78 = 1;
      _DAT_005b1b7c = *piVar1;
      _DAT_005b1b80 = *(undefined4 *)(iVar2 + 0x44);
      _DAT_005b1b84 = *(undefined4 *)(iVar2 + 0x48);
    }
    Ent_DrawAtLod(iVar2 + 0x18,2);
  }
  return;
}

