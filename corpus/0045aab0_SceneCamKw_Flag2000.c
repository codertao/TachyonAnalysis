
/* sweep */

void SceneCamKw_Flag2000(int param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x2000;
  return;
}

