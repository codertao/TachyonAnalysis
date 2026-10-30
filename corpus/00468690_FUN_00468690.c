
void FUN_00468690(int param_1)

{
  undefined *local_c;
  undefined *local_8;
  undefined *local_4;
  
  local_c = &DAT_00640000;
  local_8 = &DAT_00640000;
  local_4 = &DAT_00640000;
  DAT_005b9094 = param_1;
  if (param_1 != 0) {
    DAT_005b9084 = 0;
    FUN_004b23a0(1,DAT_005b2b9c,DAT_005b2b9c >> 1);
    FUN_004ad0c0(0,0,0);
    FUN_004abd30(0,0,0);
    FUN_004af290(0x80);
    DAT_00668f8c = 0x10000;
    FUN_004af220(200,0xff,0xff);
    FUN_004b3a10(&local_c);
    FUN_004acfa0();
    FUN_00431c40(DAT_005a6818 & 0x1ffffff,0x80,0x80,0x80,0x80);
    FUN_00431c80(&DAT_005ac548);
    FUN_00431c80(&DAT_005a7538);
    FUN_00431c80(&DAT_005a9d40);
  }
  return;
}

