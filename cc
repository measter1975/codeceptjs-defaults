#!/bin/sh

./node_modules/.bin/codeceptjs $*
// login to website
I.amOnPage(' https://www.usconcealedcarry.com/');
I.click('Login', '.nav);
I.fillField('Email', 'measter75@yahoo.com');
I.click({ css: 'continue.submit'});
I.fillField('Password', 'Jamaica1$');
I.click({css: 'Log In Now'.submit}):
I.see('Born To Protect', 'uscca-header') 

