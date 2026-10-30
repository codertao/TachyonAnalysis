
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e450(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (param_4 != 0) {
    DAT_00603e40 = (int)(short)param_2;
    DAT_00603e44 = (int)(short)((uint)param_2 >> 0x10);
    if (DAT_00603e6c != (code *)0x0) {
      (*DAT_00603e6c)(param_3,param_1);
    }
  }
  _DAT_00603e54 = DAT_00603e5c + DAT_00603e40;
  DAT_00603e48 = param_1;
  _DAT_00603e58 = DAT_00603e60 + DAT_00603e44;
  if (DAT_00603e68 == (code *)0x0) {
    return;
  }
  if (param_3 < 0x201) {
    if (param_3 == 0x200) {
      param_3 = 1;
      goto switchD_0049e4d5_caseD_a3;
    }
    switch(param_3) {
    case 0xa1:
      goto switchD_0049e4d5_caseD_a1;
    case 0xa2:
      goto switchD_0049e4d5_caseD_a2;
    default:
      goto switchD_0049e4d5_caseD_a3;
    case 0xa4:
      goto switchD_0049e4d5_caseD_a4;
    case 0xa5:
      goto switchD_0049e4d5_caseD_a5;
    case 0xa7:
      goto switchD_0049e4d5_caseD_a7;
    case 0xa8:
      goto switchD_0049e4d5_caseD_a8;
    }
  }
  switch(param_3) {
  case 0x201:
switchD_0049e4d5_caseD_a1:
    param_3 = 2;
    break;
  case 0x202:
switchD_0049e4d5_caseD_a2:
    param_3 = 4;
    break;
  default:
    break;
  case 0x204:
switchD_0049e4d5_caseD_a4:
    param_3 = 8;
    break;
  case 0x205:
switchD_0049e4d5_caseD_a5:
    param_3 = 0x10;
    break;
  case 0x207:
switchD_0049e4d5_caseD_a7:
    param_3 = 0x20;
    break;
  case 0x208:
switchD_0049e4d5_caseD_a8:
    param_3 = 0x40;
  }
switchD_0049e4d5_caseD_a3:
  if (DAT_00603e64 == 0) {
    (*DAT_00603e68)(param_3,param_1);
  }
  return;
}

