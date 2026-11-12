
/* sweep: stride 0x38 */

int WeapGroup_GetSlot(int param_1,int param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < param_2)) {
    return param_1 + param_3 * 0x38;
  }
  return 0;
}

