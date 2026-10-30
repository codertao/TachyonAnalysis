
char FUN_004c67c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  iVar2 = DAT_006caedc;
  if (DAT_00565138 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return '\0';
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
  }
  else {
    LOCK();
    DAT_006caedc = DAT_006caedc + 1;
    UNLOCK();
    bVar1 = 0 < DAT_006caed8;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_006caedc = iVar2;
      FUN_004c15cd(0x13);
    }
    uVar7 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_004c686f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_004bd812(bVar4,bVar5);
      bVar5 = FUN_004bd812();
    } while (bVar4 == bVar5);
    cVar6 = (bVar4 < bVar5) * -2 + '\x01';
LAB_004c686f:
    if (uVar7 == 0) {
      LOCK();
      DAT_006caedc = DAT_006caedc + -1;
      UNLOCK();
    }
    else {
      FUN_004c162e(0x13);
    }
  }
  return cVar6;
}

