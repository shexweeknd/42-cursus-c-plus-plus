#include "Account.hpp"

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    (void)initial_deposit;
    return ;
}

Account::~Account(void)
{
    return ;
}

// Public methods

/*------------Accessors--------------*/

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

/*TODO*/
void	Account::displayAccountsInfos( void )
{
    return ;
}

/*-----------Non-Accessors------------*/

/*TODO*/
void	Account::makeDeposit( int deposit )
{
    (void)deposit;
    return ;
}

/*TODO*/
bool	Account::makeWithdrawal( int withdrawal )
{
    (void)withdrawal;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

/*TODO*/
void	Account::displayStatus( void ) const
{
    return ;
}

// Private methods

/*TODO*/
void	Account::_displayTimestamp( void )
{
    return ;
}