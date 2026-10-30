
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ae10(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  
  DAT_00666b00 = FUN_00468310();
  if (DAT_0056c2e0 == 0) {
    DAT_0056c36c = 0;
    return;
  }
  if (DAT_0056c368 == 0) {
    DAT_0056c36c = DAT_0056c36c + 6000;
    if (0x10000 < DAT_0056c36c) {
      DAT_0056c36c = 0x10000;
    }
  }
  else {
    DAT_0056c36c = DAT_0056c36c + -0x800;
    if (DAT_0056c36c < 0) {
      DAT_0056c36c = 0;
    }
  }
  if (DAT_0056c37c != 0) {
    FUN_0048ac70();
    if (DAT_0056c35c != 0xd8f0 && -1 < DAT_0056c35c + -0xd8f0) {
      FUN_00452180(1);
      fVar1 = (float)(DAT_0056c35c + -0xd8f0) * _DAT_0052e978;
      local_8 = (uint)(longlong)ROUND(fVar1);
      DAT_0056c360 = local_8;
      if (0x50 < local_8) {
        DAT_0056c360 = 0x50;
      }
      local_8 = (uint)(longlong)ROUND(fVar1);
      iVar3 = (int)local_8 >> 1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      iVar2 = FUN_00468310();
      DAT_00666b00 = iVar2 * (iVar3 * -2 + 0xff) >> 8;
      if (DAT_00666b00 < 8) {
        DAT_00666b00 = 8;
      }
      DAT_0056c350 = DAT_0056c2c8;
      DAT_0056c354 = DAT_0056c2cc;
      DAT_0056c358 = DAT_0056c2d0;
      FUN_004e04ba(&DAT_0056c350);
      FUN_0048ad80(0x10000,0xffffff6a,1);
      FUN_0048ad80(0x20000,0xffffff83,2);
      FUN_0048ad80(0x30000,0x19,0);
      FUN_0048ad80(0x20000,200,2);
      FUN_0048ad80(0x20000,0xfa,0);
      FUN_0048ad80(0x10000,400,1);
      FUN_0048ad80(0x50000,0x1c2,2);
      FUN_0048ad80(0x30000,600,2);
      FUN_0048ad80(0x40000,900,1);
      if (iVar3 != 0) {
        FUN_00427910(iVar3);
      }
    }
  }
  return;
}

