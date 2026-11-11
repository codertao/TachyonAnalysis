
void FUN_00415d10(void)

{
  Pool_FlushKills((Pool *)&DAT_005b32d8);
  Pool_FlushKills((Pool *)&DAT_005b32b0);
  Pool_FlushKills((Pool *)&DAT_005b3288);
  Pool_FlushPending((Pool *)&DAT_005b32d8);
  Pool_FlushPending((Pool *)&DAT_005b32b0);
  Pool_FlushPending((Pool *)&DAT_005b3288);
  FUN_0045d220(&DAT_005b31d4);
  return;
}

