
/* CRT */

undefined4 __get_osfhandle(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_006c9e80) &&
     ((*(byte *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_006c9d80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 9;
  puVar1 = (undefined4 *)___doserrno();
  *puVar1 = 0;
  return 0xffffffff;
}

