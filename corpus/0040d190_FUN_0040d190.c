
void FUN_0040d190(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (((param_2 != 0) && (*(short *)(param_2 + 0x76) == 1)) &&
     (*(char *)(param_2 + 0xc2) != *(char *)(param_1 + 0xc2))) {
    if (param_2 != param_1) {
      FUN_0040d030(param_2,param_1);
    }
    FUN_0040d120(*(undefined1 *)(param_1 + 0xc2),3,1);
    FUN_0040d120(*(undefined1 *)(param_2 + 0xc2),1,1);
  }
  FUN_0040d0e0(param_1);
  return;
}

