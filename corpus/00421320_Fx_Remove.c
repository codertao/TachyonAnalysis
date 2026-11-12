
/* sweep */

void Fx_Remove(int param_1)

{
  if ((*(int *)(param_1 + 0x104) != 0) && (*(int *)(param_1 + 200) != 0)) {
    Snd3D_Release(*(int *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  Quad_Unlink(param_1);
  Quad_UnlinkDynamicList(param_1,*(int *)(param_1 + 100) + 0x14);
  return;
}

