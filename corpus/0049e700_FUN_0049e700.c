
void FUN_0049e700(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    switch(param_2) {
    case 0:
      param_1[1] = 8;
      *param_1 = 0x2b11;
      param_1[2] = param_3;
      param_1[3] = param_4;
      return;
    default:
      param_1[1] = 8;
      break;
    case 2:
      param_1[1] = 0x10;
      break;
    case 3:
      param_1[1] = 0x10;
      *param_1 = 0xac44;
      param_1[2] = param_3;
      param_1[3] = param_4;
      return;
    }
    *param_1 = 0x5622;
    param_1[2] = param_3;
    param_1[3] = param_4;
  }
  return;
}

