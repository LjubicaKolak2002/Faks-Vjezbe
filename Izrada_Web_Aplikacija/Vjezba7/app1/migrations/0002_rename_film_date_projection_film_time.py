# Generated by Django 4.0.4 on 2022-05-24 07:31

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('app1', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='projection',
            old_name='film_date',
            new_name='film_time',
        ),
    ]