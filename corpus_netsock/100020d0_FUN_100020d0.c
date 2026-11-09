
void __cdecl FUN_100020d0(uint param_1)

{
  undefined2 local_8;
  undefined2 uStack_6;
  undefined2 local_4;
  undefined2 uStack_2;
  
  if (DAT_10019c88 != 0) {
    if (DAT_10019c96 + 10000U < param_1) {
      DAT_10019c88 = 0;
      DAT_10019c8c = 0x31;
      if (DAT_100198ac == 0) {
        FUN_10001830();
        return;
      }
    }
    else if (DAT_10019c9a + 0x5dc < param_1) {
      DAT_10019c9a = param_1;
      _local_8 = CONCAT22((short)(param_1 >> 0x10),0x1012);
      _local_4 = CONCAT22((short)param_1,0x14);
      FUN_10005240((char *)&local_8,8,DAT_10019c92,DAT_10019c90);
    }
  }
  return;
}

