
void FUN_0048d400(void)

{
  POINT pt;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  BOOL BVar5;
  int iVar6;
  RECT local_14;
  
  iVar1 = GLBL_llist_large_thing;
  if (DAT_0056aadc != 0) {
    DAT_0056aadc = DAT_0056aadc + -1;
    return;
  }
  DAT_0056aadc = DAT_0056aad8;
  iVar2 = FUN_0048d270();
  FUN_0048d230(DAT_0056aad4 + iVar2);
  iVar2 = 0;
joined_r0x0048d447:
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar6 = *(int *)(iVar1 + 0x228) + DAT_0056aad4;
    *(int *)(iVar1 + 0x228) = iVar6;
    iVar6 = iVar6 + *(int *)(iVar1 + 0x21c);
    if (DAT_0056aad4 < 0) {
      if (iVar6 < DAT_0056aac4) {
        iVar3 = FUN_0048d270();
        iVar6 = *(int *)(iVar1 + 0x21c);
        if ((*(byte *)(iVar1 + 0x2b4) & 2) != 0) {
          if (iVar2 == 0) {
            GLBL_llist_large_thing = *(int *)(iVar1 + 0x2b8);
          }
          else {
            *(undefined4 *)(iVar2 + 0x2b8) = *(undefined4 *)(iVar1 + 0x2b8);
          }
          iVar2 = *(int *)(iVar1 + 0x2b8);
          if (*(code **)(iVar1 + 0x22c) != (code *)0x0) {
            (**(code **)(iVar1 + 0x22c))(iVar1 + 0x234);
          }
          OurFreeMem(iVar1);
          iVar1 = iVar2;
          goto joined_r0x0048d447;
        }
        uVar4 = FUN_0048d270();
        *(undefined4 *)(iVar1 + 0x228) = uVar4;
        FUN_0048d230(iVar3 + iVar6 + 0x34);
        if (*(code **)(iVar1 + 0x22c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x22c))(iVar1 + 0x234);
        }
      }
    }
    else if (DAT_0056aacc < iVar6) {
      iVar2 = FUN_0048d270();
      FUN_0048d230((iVar2 - *(int *)(iVar1 + 0x21c)) + 0x2c);
      uVar4 = FUN_0048d270();
      *(undefined4 *)(iVar1 + 0x228) = uVar4;
    }
    local_14.left = *(int *)(iVar1 + 0x228);
    local_14.right = local_14.left + *(int *)(iVar1 + 0x21c);
    local_14.top = *(int *)(iVar1 + 0x224);
    local_14.bottom = *(int *)(iVar1 + 0x220) + local_14.top;
    if (local_14.left < DAT_0056aac4) {
      local_14.left = DAT_0056aac4;
    }
    if (DAT_0056aacc < local_14.right) {
      local_14.right = DAT_0056aacc;
    }
    pt.y = (uint)((longlong)DAT_00603e44 * (longlong)DAT_005a67e4) >> 0x10 |
           (int)((ulonglong)((longlong)DAT_00603e44 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    pt.x = (uint)((longlong)DAT_00603e40 * (longlong)DAT_005a67e4) >> 0x10 |
           (int)((ulonglong)((longlong)DAT_00603e40 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    BVar5 = PtInRect(&local_14,pt);
    if (BVar5 == 0) {
      uVar4 = 0;
      *(undefined4 *)(iVar1 + 0x214) = 0;
LAB_0048d5fb:
      *(undefined4 *)(iVar1 + 0x218) = uVar4;
    }
    else {
      uVar4 = 1;
      *(undefined4 *)(iVar1 + 0x214) = 1;
      if (((byte)DAT_00603e48 & 1) != 0) goto LAB_0048d5fb;
      if ((*(int *)(iVar1 + 0x218) != 0) && (*(code **)(iVar1 + 0x230) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x230))(iVar1 + 0x234);
      }
      *(undefined4 *)(iVar1 + 0x218) = 0;
    }
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar1 + 0x2b8);
  } while( true );
}

