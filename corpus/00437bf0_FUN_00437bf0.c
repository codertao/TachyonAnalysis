
void FUN_00437bf0(uint *param_1,uint param_2)

{
  if ((param_2 & *param_1) != 0) {
    *param_1 = *param_1 ^ param_2;
  }
  return;
}

