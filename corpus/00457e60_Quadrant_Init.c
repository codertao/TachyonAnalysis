
/* clear 0xbc, FLIGHTGROUP_ARRAY, link SectorRec<->Quadrant */

void __cdecl Quadrant_Init(Quadrant *q,SectorRec *rec,int regionId,int sectorId)

{
  void *pvVar1;
  
  clr_bytes(q,0xbc);
  Mem_AllocZeroTagged(&q->flightGroups,0xa00,4,s_FLIGHTGROUP_ARRAY_00548d6c,0xbbbb);
  q->sector = rec;
  pvVar1 = (void *)Dialog_InitQuadQueue();
  q->handle5c = pvVar1;
  q->sectorId = sectorId;
  rec->sectorId = sectorId;
  rec->regionId = regionId;
  rec->quadrant = q;
  Orders_InitServerPool(q);
  Quadrant_InitSpawnPool(q);
  return;
}

