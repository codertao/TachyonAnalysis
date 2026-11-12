
/* CRT */

undefined4 __close(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_006c9e80) &&
     ((*(byte *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    __lock_fhandle(param_1);
    uVar1 = __close_lk(param_1);
    __unlock_fhandle(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 9;
  puVar2 = (undefined4 *)___doserrno();
  *puVar2 = 0;
  return 0xffffffff;
}

