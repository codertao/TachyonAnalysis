
/* sweep */

void BasePart_SendAttach(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xdc) == 0) {
      NetCli_SendAttach(param_2[1],param_2[2],param_2[4],*(undefined4 *)(param_1 + 0xe8),*param_2,0,
                        0);
      return;
    }
    NetCli_SendAttach(param_2[1],param_2[2],param_2[4],
                      *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xe8),*param_2,1,
                      *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x44));
  }
  return;
}

