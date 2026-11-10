
/* rule 9: 2 if target DCB pool type (+0x76) == 1 (player) */

byte TargetRule_IgnorePlayers(undefined4 param_1,int param_2)

{
  return (*(short *)(param_2 + 0x76) != 1) - 1U & 2;
}

