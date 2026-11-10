
/* placement +0x5c alias: false if the alias's persistent state says dead */

bool Sped_AliasCanSpawn(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    return true;
  }
  iVar1 = Sped_FindAliasState(*(int *)(param_1 + 0xf8) + param_2 * 0x20);
  if (iVar1 == 0) {
    return true;
  }
  return *(int *)(iVar1 + 4) == 0;
}

