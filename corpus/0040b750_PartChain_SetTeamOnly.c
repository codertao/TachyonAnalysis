
/* sweep */

void PartChain_SetTeamOnly(int param_1,undefined1 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xe0)) {
    *(undefined1 *)(param_1 + 0xc2) = param_2;
  }
  return;
}

