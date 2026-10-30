
void FUN_0040b4f0(int param_1,undefined1 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    *(undefined1 *)(param_1 + 0xc2) = param_2;
    if ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x34) & 6) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
  }
  return;
}

