// Copyright (c) 2015-2015 The IOBond developers
// Copyright (c) 2014-2015 The WTMint developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


 

#ifndef WTMINT_H
#define WTMINT_H

 
#define TO_GENESIS_BLOCK		false

#define CLIENT_VERSION_MAJOR       3
#define CLIENT_VERSION_MINOR       0
#define CLIENT_VERSION_REVISION    0
#define CLIENT_VERSION_BUILD       1

#define WTMINT_MAX_MONEY			 3141592653589793238
                                   // 271828182845904523  
#define WTMINT_MAX_SEND				  429496729600000000
								   
//#define WTMINT_GENESIS_BLOCK	"0xc741436d354a9fb337fbd79e4b2750732571f00e8b78d04493f9e9283cf4ad0b" //keep the same length
#define WTMINT_COINBASE_MATURITY 2


#define WTMINT_GENESIS_BLOCK	"0x062550537871c387faaa5cd91bb8a2cf4b67d3a4ec816799ecc1f5cb7fd54bcc"
#define WTMINT_pszTimestamp		"Asian Investment Bond By IOBond.com"
#define WTMINT_scriptPubKey		"04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f"

#define WTMINT_BLOCK_nTime			1428195753
#define WTMINT_BLOCK_nNonce			433798
#define WTMINT_BLOCK_hashMerkleRoot	"0x85f6c5fd0e39b5aa8688a844b283accef86973fcfdb7deac12ab2d4bebdc7c82"

#define WTMINT_BLOCK_nTargetTimespan 14400  //4 * 60 * 60 //  : every 4 hours
#define WTMINT_BLOCK_nTargetSpacing 60 //  : 1 minutes


//Magic Header
#define WTMINT_MAGIC_1	0xa3
#define WTMINT_MAGIC_2	0xb1
#define WTMINT_MAGIC_3	0xc4
#define WTMINT_MAGIC_4	0xd1

//Wallet starting letter
#define WTMINT_PUBKEY_ADDRESS 23 // Dec.

#define WTMINT_RPC_PORT 51413
#define WTMINT_SERVER_PORT 31415
#define WTMINT_RPC_SUBJECT "AIB"

#define WTMINT_AUX_ChainID 0x0025  //Hex
#define WTMINT_AUX_StartBlock 3
#define WTMINT_KGW_StartBlock 6000


#define WTMINT_CHKPNT_LAST_TIMESTAMP 1414056601    // * UNIX timestamp of last checkpoint block
#define WTMINT_CHKPNT_TX_QUANTITY 154911		// * total number of transactions between genesis and last checkpoint  (the tx=... number in the SetBestChain debug.log lines)
#define WTMINT_CHKPNT_ESTIMATED_TX 1500   // * estimated number of transactions per day after checkpoint
 
////////////////////////////////////////////
#include "uint256.h"
#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <map>

//////////////////////////////////////
typedef long long  int64;
typedef unsigned long long  uint64;
typedef std::map<int, uint256> MapCheckpoints;


//////////////////////////////////////
		
class uint256;


/** Block-chain checkpoints are compiled-in sanity checks.
 * They are updated every release or three.
 
 mapCheckpoints = boost::assign::map_list_of

        (  0, uint256("0xc741436d354a9fb337fbd79e4b2750732571f00e8b78d04493f9e9283cf4ad0b"))
		(  100, uint256("0xf9360dcc30cb9cea913c1dfe03989560a466c8c6faa5948cd839637f3d5f12a0"))
		(  1000, uint256("0b6c05a423705b97c3ea30279506a1afdd583077f7650d02641d2a3a37a8ea15"))
		(  10000, uint256("973266a50b103d7057acbd07d49ca2b6f981fe534dae23438828221a65188639"))
		(  100000, uint256("95dc645ee15c791b94ec4b7076d7e3922325878767921c87f154b0327a6c7c7a"))
		(  133133, uint256("2f41bc8e8d5be6952d8d49f08c5cc2015d2b9a3f1c160116ef10f1a63355abbc"))
        (  150879, uint256("abda2abf9abc0bd24e9827c5e3795e254ad1dcfaf307a4386c5b20fedc3c2df9"))
	;
 
 */
namespace WTMint
{
   
    int64 GetBlockValue(int diffTime,int nBits,int nHeight, int64 nFees, uint256 prevHash);
	
	static MapCheckpoints  mapCheckpoints = boost::assign::map_list_of

        (  0, uint256("0x062550537871c387faaa5cd91bb8a2cf4b67d3a4ec816799ecc1f5cb7fd54bcc"))
        (  10000, uint256("94e27efa6264d5adfcf30adcc0669b26c1ffcbdd3fff4ba70a804280ccee444a"))
        (  100000, uint256("964ba54366fd2d867882ea6be03b3f8ee817a94e0b46b1d9dd3caa379d9ff118"))
        (  500000, uint256("d7f084ecf92896c76a50cdc12ed6f7e9d35f3682f9e3e2faf65dddab13cffb81"))
        (  538888, uint256("0120e15f267d25108a37d8b564246d72b505674061021b51d7e9b0a393444a19"))
	;

}



#endif

