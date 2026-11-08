
/* material + (counter[+0x1a] % frames[+0x19]) * 0x1c */

int Mat_GetAnimFrame(int param_1)

{
  if ((*(byte *)(param_1 + 0x1a) < 0x7d) && (*(byte *)(param_1 + 0x19) != 0)) {
    return param_1 + (*(uint *)(&DAT_00668fe0 + (uint)*(byte *)(param_1 + 0x1a) * 4) %
                     (uint)*(byte *)(param_1 + 0x19)) * 0x1c;
  }
  return param_1;
}

