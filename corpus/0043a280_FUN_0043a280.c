
void FUN_0043a280(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int *param_6)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_3 != 0) {
    FUN_004ad9c0(*(undefined4 *)(param_3 + 0x1650),0);
    if (DAT_00564ae4 == 0) {
      local_24 = DAT_00604460;
      local_20 = DAT_00604464;
      local_1c = DAT_00604468;
      local_18 = DAT_0060446c;
      iVar4 = *param_6;
      if (*param_6 <= DAT_00604460) {
        iVar4 = DAT_00604460;
      }
      iVar5 = DAT_00604464;
      if (DAT_00604464 < param_6[1]) {
        iVar5 = param_6[1];
      }
      iVar6 = DAT_00604468;
      if (param_6[2] < DAT_00604468) {
        iVar6 = param_6[2];
      }
      iVar7 = param_6[3];
      if (DAT_0060446c <= param_6[3]) {
        iVar7 = DAT_0060446c;
      }
      FUN_00451fc0(iVar4,iVar5,iVar6,iVar7,0);
      copy_str32_to_some_global(&DAT_005a67a0);
    }
    piVar1 = (int *)(param_3 + 0x60);
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    iVar4 = *piVar1;
    piVar3 = (int *)(param_3 + 0x50);
    while (iVar4 != 0) {
      local_14 = *piVar3 + param_4;
      local_10 = param_5 + piVar3[1];
      local_c = local_14 + piVar3[2];
      local_8 = local_10 + piVar3[3];
      iVar4 = FUN_0043af70(&local_14,param_6);
      if (iVar4 != 0) {
        lVar2 = (longlong)(*piVar3 + param_4) * (longlong)DAT_005a67e4;
        DAT_005a62d8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)(param_5 + piVar3[1]) * (longlong)DAT_005a67e4;
        DAT_005a62dc = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        DAT_005a62e0 = DAT_005a67e4 * piVar3[2] + 0xffff >> 0x10;
        DAT_005a62e4 = DAT_005a67e4 * piVar3[3] + 0xffff >> 0x10;
        DAT_005a64cc = piVar3[2];
        DAT_005a64d0 = piVar3[3];
        DAT_005a64c0 = piVar3[7];
        DAT_005a64c8 = piVar1;
        if ((DAT_005a64c0 & 0x20000) == 0) {
          piVar1[1] = *(int *)(param_3 + 0x1684) + *(int *)(param_3 + 0x1688) & 0xff;
          DAT_005a64c4 = *(int *)(param_3 + 0x1684) + *(int *)(param_3 + 0x1688) & 0xff;
        }
        FUN_004ace10();
      }
      piVar1 = piVar3 + 0xf;
      iVar4 = piVar3[0xf];
      piVar3 = piVar3 + 0xb;
    }
    if (DAT_00564ae4 == 0) {
      FUN_00452070(local_24,local_20,local_1c,local_18,0);
      copy_str32_to_some_global(&DAT_005a67a0);
    }
  }
  return;
}

