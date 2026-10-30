
void FUN_00456e40(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 1:
    FUN_00466590(1,0xe,0x1f,0xff);
    return;
  case 2:
    FUN_00466590(1,0xe,0x20,0xff);
    return;
  case 3:
    FUN_00456da0(param_2);
    break;
  case 4:
    FUN_00456df0(param_2);
    break;
  case 5:
  case 6:
  case 7:
    FUN_00466590(1,0xe,0x21,0xff);
    return;
  case 8:
    FUN_00456da0(100000);
    FUN_00456df0(100000);
    FUN_00466590(1,0xe,0x22,0xff);
    return;
  case 9:
    FUN_00456da0(param_2);
    FUN_00456df0(param_2);
    FUN_00466590(1,0xe,0x1f,0xff);
    return;
  case 10:
    FUN_00466590(1,0xe,0x26,0xff);
  default:
    return;
  }
  FUN_00466590(1,0xe,0x1f,0xff);
  return;
}

