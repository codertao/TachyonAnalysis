
/* server player DCB think: ease to client pose, every 16 frames Power_Regen(shields, forced) with
   client-sent rate, sapper drain, hazard damage */

void TachSrv_PlayerThink(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 0x204);
  if (iVar1 != 0) {
    *(int *)(*(int *)(param_1 + 0xdc) + 0x204) = iVar1 + -1;
  }
  iVar1 = *(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x15c) = iVar1;
  iVar2 = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x158) = iVar2;
  iVar3 = *(int *)(param_1 + 0x160) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x160) = iVar3;
  *(int *)(param_1 + 0x34) = (iVar2 - *(int *)(param_1 + 0x34) >> 4) + *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x38) = (iVar1 - *(int *)(param_1 + 0x38) >> 4) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x3c) = (iVar3 - *(int *)(param_1 + 0x3c) >> 4) + *(int *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x4c) =
       ((*(int *)(param_1 + 0x164) - *(int *)(param_1 + 0x4c)) * 0x80 >> 10) +
       *(int *)(param_1 + 0x4c) & 0x1ffffff;
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x50) =
       ((*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x50)) * 0x80 >> 10) +
       *(int *)(param_1 + 0x50) & 0x1ffffff;
  *(uint *)(param_1 + 0x54) =
       ((*(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x54)) * 0x80 >> 10) +
       *(int *)(param_1 + 0x54) & 0x1ffffff;
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x76) == 1)) {
    FUN_00460d70(iVar1);
  }
  if (((*(uint *)(param_1 + 0x10c) ^ DAT_005897e4) & 0xf) == 0) {
    Power_Regen(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0,0x12,*(undefined4 *)(param_1 + 0xfc)
               );
    if (*(int *)(param_1 + 0x14c) != 0) {
      Power_SapperDrain(param_1 + 0x11c,*(int *)(param_1 + 0x14c),2);
    }
  }
  FUN_00460ce0(param_1);
  Dcb_SetRangeFlags(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00455b40(param_1,*(int *)(param_1 + 0x90));
  }
  Sector_RadiationTick(param_1);
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_00460cb0(param_1);
  }
  return;
}

