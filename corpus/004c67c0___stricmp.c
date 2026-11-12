
/* CRT: case-INSENSITIVE compare (was str_cmp) */

char __stricmp(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  iVar2 = GLBL_locale_inprocess_gauge;
  if (GLBL_use_locale_str_funcs == 0) {
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
    GLBL_locale_inprocess_gauge = GLBL_locale_inprocess_gauge + 1;
    UNLOCK();
    bVar1 = 0 < GLBL_locale_counter;
    if (bVar1) {
      LOCK();
      UNLOCK();
      GLBL_locale_inprocess_gauge = iVar2;
      __lock(0x13);
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
      bVar4 = __tolower_lk(bVar4,bVar5);
      bVar5 = __tolower_lk();
    } while (bVar4 == bVar5);
    cVar6 = (bVar4 < bVar5) * -2 + '\x01';
LAB_004c686f:
    if (uVar7 == 0) {
      LOCK();
      GLBL_locale_inprocess_gauge = GLBL_locale_inprocess_gauge + -1;
      UNLOCK();
    }
    else {
      __unlock(0x13);
    }
  }
  return cVar6;
}

