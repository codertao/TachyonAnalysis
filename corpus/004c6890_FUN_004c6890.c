
undefined4 FUN_004c6890(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = DAT_006caedc;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_00565138 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_004c68ef;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_004c68ef:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_006caedc = DAT_006caedc + 1;
      UNLOCK();
      bVar8 = 0 < DAT_006caed8;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_006caedc = iVar2;
        FUN_004c15cd(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_004bd812(uVar7,uVar5);
        uVar5 = FUN_004bd812();
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_004c6965;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_004c6965:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_006caedc = DAT_006caedc + -1;
        UNLOCK();
      }
      else {
        FUN_004c162e(0x13);
      }
    }
  }
  return uVar6;
}

