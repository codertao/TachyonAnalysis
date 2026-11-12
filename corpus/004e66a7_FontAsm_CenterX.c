
/* sweep: asm, reg-passed args */

int FontAsm_CenterX(void)

{
  uint extraout_ECX;
  
  FontAsm_MeasureString();
  return (DAT_00604474 >> 7) - (extraout_ECX >> 1);
}

