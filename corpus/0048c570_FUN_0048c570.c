
void FUN_0048c570(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  iVar1 = param_1 * 0x170;
  *(int *)(&DAT_0056ac34 + iVar1) = param_2;
  (&DAT_0056ac38)[param_1 * 0x5c] = param_2;
  *(float *)(&DAT_0056ac14 + iVar1) =
       (float)(int)((uint)(byte)(&DAT_0056ac08)[iVar1] - (uint)(byte)(&DAT_0056ac02)[iVar1]) /
       (float)*(int *)(&DAT_0056ac34 + iVar1);
  *(float *)(&DAT_0056ac18 + iVar1) =
       (float)(int)((uint)(byte)(&DAT_0056ac07)[iVar1] - (uint)(byte)(&DAT_0056ac01)[iVar1]) /
       (float)*(int *)(&DAT_0056ac34 + iVar1);
  *(float *)(&DAT_0056ac1c + iVar1) =
       (float)(int)((uint)(byte)(&DAT_0056ac06)[iVar1] - (uint)(byte)(&DAT_0056ac00)[iVar1]) /
       (float)*(int *)(&DAT_0056ac34 + iVar1);
  *(float *)(&DAT_0056ac20 + iVar1) =
       (float)(int)((uint)(byte)(&DAT_0056ac0b)[iVar1] - (uint)(byte)(&DAT_0056ac05)[iVar1]) /
       (float)*(int *)(&DAT_0056ac34 + iVar1);
  *(float *)(&DAT_0056ac24 + iVar1) =
       (float)(int)((uint)(byte)(&DAT_0056ac0a)[iVar1] - (uint)(byte)(&DAT_0056ac04)[iVar1]) /
       (float)*(int *)(&DAT_0056ac34 + iVar1);
  *(float *)(&DAT_0056ac28 + iVar1) =
       (float)(int)((uint)(byte)(&DAT_0056ac09)[iVar1] - (uint)(byte)(&DAT_0056ac03)[iVar1]) /
       (float)*(int *)(&DAT_0056ac34 + iVar1);
  return;
}

