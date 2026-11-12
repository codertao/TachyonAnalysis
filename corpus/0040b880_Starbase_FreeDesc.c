
/* sweep */

void Starbase_FreeDesc(int param_1)

{
  BaseFile_Free(*(undefined4 *)(param_1 + 0x94));
  if (*(int *)(param_1 + 0xbc) != 0) {
    Scene_Free(*(int *)(param_1 + 0xbc));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    Scene_Free(*(int *)(param_1 + 0xc0));
  }
  return;
}

