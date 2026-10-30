
void FUN_0040bc90(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  bVar1 = *(byte *)(*DAT_005b2770 + 4);
  iVar2 = FUN_004648a0(param_1,0,0,s_BASE_PART_DEBUG_00532e9c);
  str_sprintf(local_80,s_PART_NUM___d_OCF_PART_ID___d_00532e7c,
              *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x44),
              *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x58));
  FUN_0048e970(local_80,DAT_005b2770,0x1c,iVar2 + (uint)bVar1,0xff0000,0xffff,0x10000,2);
  return;
}

