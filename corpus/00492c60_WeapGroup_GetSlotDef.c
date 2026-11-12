
/* sweep */

undefined4 WeapGroup_GetSlotDef(int param_1,int param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < param_2)) {
    return *(undefined4 *)(param_1 + param_3 * 0x38);
  }
  return 0;
}

