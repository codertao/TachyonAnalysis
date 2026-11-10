
/* rule 2: 1 if target placement object id (+0xd8 -> +0x20) == rule target */

undefined4 TargetRule_ObjectMatch(int param_1,int param_2,int param_3)

{
  if ((((param_3 == 0) || (*(char *)(param_3 + 0x1b) != '\x01')) && (*(int *)(param_2 + 0xd8) != 0))
     && (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_2 + 0xd8) + 0x20))) {
    return 1;
  }
  return 0;
}

