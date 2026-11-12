
/* sweep */

void ReplicaChain_SetTeam(int param_1,undefined1 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xd8)) {
    *(undefined1 *)(param_1 + 0xc2) = param_2;
  }
  return;
}

