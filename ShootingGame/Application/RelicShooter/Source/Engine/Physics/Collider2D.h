#ifndef _COLLIDER_2D_H
#define _COLLIDER_2D_H


class TileCollisionBlock;
class BoxCollider2D;
class CircleCollider2D;
class TileMap;
class Player;

class Collider2D
{
public:
	Collider2D();
	virtual ~Collider2D();

	virtual bool CollidesWith(Collider2D* pCollider2D) = 0;
	virtual bool CollidesWith(BoxCollider2D* pBoxCollider2D) = 0;
	virtual bool CollidesWith(CircleCollider2D* pCircleCollider2D) = 0;
	virtual bool CollidesWith(TileMap* pTileMap) = 0;
	//virtual bool CollidesWith(Player* pPlayer) = 0;
	virtual bool CollidesWith(TileCollisionBlock* pTileCollisionBlock) = 0;

	virtual void OnCollision(Collider2D* pCollider2D) = 0;

	static bool CircleCircleCollision(const CircleCollider2D* pCircleA, const CircleCollider2D* pCircleB);
	static bool RectangleRectangleCollision(const BoxCollider2D* pBoxA, const BoxCollider2D* pBoxB);
	static bool RctangleCircleCollision(BoxCollider2D* pBoxA, CircleCollider2D* pCircleA);
};

#endif
