
void FUN_10002f20(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_10019c5c;
  *(undefined2 *)DAT_10019c5c = 0x1052;
  *(undefined2 *)((int)puVar1 + 2) = 4;
  FUN_10002e40(puVar1,4,0,0);
  DAT_10019c54 = 1;
  return;
}

