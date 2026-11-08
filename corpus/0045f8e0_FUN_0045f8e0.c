
void FUN_0045f8e0(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(DAT_0058b068 + 0x13c) = 0;
  Ent_EnterQuadrant(DAT_0058b064,*(undefined4 *)(DAT_0058b064 + 100));
  if (DAT_005653a0 != 0) {
    *(undefined4 *)(DAT_005653a0 + 100) = *(undefined4 *)(DAT_0058b064 + 100);
    FUN_00457a70(DAT_005653a0,*(undefined4 *)(DAT_005653a0 + 100));
  }
  if (*(int *)(DAT_0058b068 + 0x1cc) != 0) {
    FUN_004269b0(*(int *)(DAT_0058b068 + 0x1cc) + 0x34,*(undefined4 *)(DAT_0058b064 + 100),
                 DAT_0058b068);
  }
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  local_10 = 2;
  local_c = 0;
  Mission_PostEvent(&local_18,*(undefined4 *)(DAT_0058b064 + 100));
  return;
}

