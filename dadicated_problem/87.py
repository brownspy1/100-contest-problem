import asyncio

async def fake_api_call(value):
    await asyncio.sleep(1)
    result = f"Got: {value}"
    return result
async def main():
    user = int(input())
    result = await fake_api_call(user)
    print(result)
    
if __name__ == '__main__':
    asyncio.run(main())