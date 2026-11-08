
void FUN_0043c030(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 + 0x204);
  if ((*(uint *)(param_2 + 0x204) & 0x40000) != 0) {
    *puVar1 = *(uint *)(param_2 + 0x204) | 0x400;
    sbi_label_flags_11c(param_1,param_2,4);
  }
  if ((*puVar1 & 0x80000) == 0) {
    if (DAT_00564ae4 == 0) {
      if ((*puVar1 & 0x400) == 0) {
        return;
      }
      clear_flags(puVar1,0x400);
    }
    if ((param_2 != 0) && (*(int *)(param_2 + 0x1e8) != 0)) {
      FUN_0043a160(*(int *)(param_2 + 0x1e8),*(int *)(param_2 + 0xd4) + param_3,
                   *(int *)(param_2 + 0xd8) + param_4,*(undefined4 *)(param_2 + 0xc4),
                   *(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
    }
  }
  return;
}

