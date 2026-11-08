
void FUN_0043a470(int param_1,int param_2,int param_3,float param_4,float param_5,uint param_6,
                 int param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_c;
  
  uVar9 = DAT_0060446c;
  uVar8 = DAT_00604468;
  uVar7 = DAT_00604464;
  uVar6 = DAT_00604460;
  if (param_1 != 0) {
    FUN_00452150();
    FUN_00451fc0(0,0,0x27f,0x1df,1);
    copy_str32_to_some_global(&DAT_005a67a0);
    FUN_00452180(1);
    FUN_004ad9c0(*(undefined4 *)(param_1 + 0x1650),0);
    piVar1 = (int *)(param_1 + 0x60);
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    uVar10 = 0xffffffff;
    iVar2 = *piVar1;
    piVar5 = (int *)(param_1 + 0x50);
    while (iVar2 != 0) {
      if ((*piVar5 == 0) || (DAT_005a62d8 = uVar10, uVar10 == 0xffffffff)) {
        local_c = (int)(longlong)ROUND((float)*piVar5 * param_4);
        lVar4 = (longlong)(local_c + param_2) * (longlong)DAT_005a67e4;
        DAT_005a62d8 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
      }
      local_c = (int)(longlong)ROUND((float)piVar5[1] * param_5);
      lVar4 = (longlong)(local_c + param_3) * (longlong)DAT_005a67e4;
      DAT_005a62dc = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
      local_c = (int)(longlong)ROUND((float)piVar5[2] * param_4);
      DAT_005a62e0 = local_c * DAT_005a67e4 + 0xffffU >> 0x10;
      local_c = (int)(longlong)ROUND((float)piVar5[3] * param_5);
      DAT_005a62e4 = local_c * DAT_005a67e4 + 0xffffU >> 0x10;
      DAT_005a64cc = piVar5[2];
      DAT_005a64d0 = piVar5[3];
      uVar3 = piVar5[7];
      uVar10 = DAT_005a62e0 + DAT_005a62d8;
      DAT_005a64c0 = uVar3 | param_6;
      piVar5[7] = DAT_005a64c0;
      DAT_005a64c8 = piVar1;
      if ((DAT_005a64c0 & 0x20000) == 0) {
        piVar1[1] = param_7;
        DAT_005a64c4 = param_7;
      }
      FUN_004ace10();
      piVar5[7] = uVar3;
      piVar1 = piVar5 + 0xf;
      iVar2 = piVar5[0xf];
      piVar5 = piVar5 + 0xb;
    }
    FUN_00452150();
    FUN_00452070(uVar6,uVar7,uVar8,uVar9,1);
    copy_str32_to_some_global(&DAT_005a67a0);
  }
  return;
}

